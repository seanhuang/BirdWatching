//
//  BirdSighting.h
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import <Foundation/Foundation.h>

// 定义类
@interface BirdSighting : NSObject

// 类属性
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;

// 类函数
-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;

@end

