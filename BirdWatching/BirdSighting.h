//
//  BirdSighting.h
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;
@end

