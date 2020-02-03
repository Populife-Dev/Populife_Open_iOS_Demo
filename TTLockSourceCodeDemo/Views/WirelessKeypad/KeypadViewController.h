//
//  KeypadViewController.h
//  TTLockSourceCodeDemo
//
//  Created by Jinbo Lu on 2019/5/28.
//  Copyright © 2019 Sciener. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KeypadModel.h"

@interface KeypadViewController : UITableViewController
- (instancetype)initWithKeypadModel:(KeypadModel *)keypadModel;
@end


