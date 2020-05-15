//
//  FingerprintTableViewController.h
//  TTLockSourceCodeDemo
//
//  Created by Jinbo Lu on 2019/4/22.
//  Copyright © 2019 Populife. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FingerprintTableViewController : UITableViewController
- (instancetype)initWithLockModel:(LockModel *)lockModel;
@end

NS_ASSUME_NONNULL_END
