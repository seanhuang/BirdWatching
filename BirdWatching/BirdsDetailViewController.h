//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
