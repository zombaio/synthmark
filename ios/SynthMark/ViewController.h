/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <UIKit/UIKit.h>
#import "AppObject.h"

@interface ViewController : UIViewController {

}

@property (weak, nonatomic) AppObject *m_appObject;
@property (weak, nonatomic) IBOutlet UIButton *buttonTest1;
@property (weak, nonatomic) IBOutlet UIButton *buttonTest2;
@property (weak, nonatomic) IBOutlet UIButton *buttonTest3;
@property (weak, nonatomic) IBOutlet UITextView *textViewOutput;

@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicatorRunning;
@property (weak, nonatomic) IBOutlet UILabel *labelShortStatus;




-(IBAction) buttonPressed:(id)sender;

@end
