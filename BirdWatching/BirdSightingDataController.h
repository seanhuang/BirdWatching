//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject
// 保存 BirdSighting 对象
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

// BirdSighting 对象总数
- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
// 新增 BirdSighting 对象
- (void)addBirdSightingWithName:(NSString *)inputBirdName location:(NSString *)inputLocation;

@end
