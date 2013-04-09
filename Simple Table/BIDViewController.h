//
//  BIDViewController.h
//  Simple Table
//
//  Created by Herne on 13-4-9.
//  Copyright (c) 2013年 Herne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController
    <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) NSArray *listData;

@end
