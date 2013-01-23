//
//  BirdSighting.m
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import "BirdSighting.h"

// 实现类
@implementation BirdSighting
@synthesize name = _name, location = _location, date = _date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date; {
	// 调用父类的初始化函数
    self = [super init];
    if (self) {
        _name = name;
        _location = location;
        _date = date;
        return self;
    }
    return nil;
}
@end
