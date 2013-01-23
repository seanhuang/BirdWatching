//
//  BirdSightingDataController.m
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import "BirdSightingDataController.h"
#import "BirdSighting.h"

@interface BirdSightingDataController ()
// private
- (void)initializeDefaultDataList;
@end

@implementation BirdSightingDataController
@synthesize masterBirdSightingList = _masterBirdSightingList;

// 初始化默认列表
- (void)initializeDefaultDataList {
    // 创建一个 NSMutableArray 类型的变量
    NSMutableArray *sightingList = [[NSMutableArray alloc] init];
    // 赋值给自己的属性
    self.masterBirdSightingList = sightingList;

    // 添加一个鸽子,随处可见的鸽子
    [self addBirdSightingWithName:@"Pigeon" location:@"Everywhere"];
    [self addBirdSightingWithName:@"乌鸦" location:@"倒霉的地方都有它"];
}

- (void)setMasterBirdSightingList:(NSMutableArray *)newList {
    // 指针不一致
    if (_masterBirdSightingList != newList) {
        _masterBirdSightingList = [newList mutableCopy];
    }
}

- (id)init {
    // 如果 [super init] 调用成功
    if (self = [super init]) {
        // 初始化默认列表
        [self initializeDefaultDataList];
        return self;
    }
    // 否则返回空
    return nil;
}

- (NSUInteger)countOfList {
    return [self.masterBirdSightingList count];
}

- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex {
    return [self.masterBirdSightingList objectAtIndex:theIndex];
}

- (void)addBirdSightingWithName:(NSString *)inputBirdName location:(NSString *)inputLocation {
    BirdSighting *sighting;

    // 获取今天日期
    NSDate *today = [NSDate date];

    sighting = [[BirdSighting alloc] initWithName:inputBirdName
                                         location:inputLocation
                                             date:today];
    // 添加进去
    [self.masterBirdSightingList addObject:sighting];
}
@end
