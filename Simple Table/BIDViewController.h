//
//  BIDViewController.h
//  Simple Table
//
//  Created by Herne on 13-4-9.
//  Copyright (c) 2013年 Herne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"

@interface BIDViewController : UIViewController
    <UITableViewDelegate, UITableViewDataSource, EGORefreshTableHeaderDelegate>
{
    BOOL _reloading;
    EGORefreshTableHeaderView *_refreshHeaderView;
@private
    NSMutableArray *_dataSource;
    NSInteger _totalNumberOfRows;
    NSInteger _refreshCount;
    NSInteger _loadMoreCount;

}

@property(strong, nonatomic) IBOutlet UITableView *tbView;

@property (strong, nonatomic) NSArray *listData;

-(void)reloadTableViewDataSource;
-(void)doneLoadingTableViewData;

@end
