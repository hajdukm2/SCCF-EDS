//
//  MyLocationViewController.h
//  SCCF
//
//  Created by Kenneth Coury on 2/21/15.
//  Copyright (c) 2015 Kenneth Coury. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Summary.h"
#import "VariableStore.h"
NSString *mMYGlobalVariable;
NSString *YGlobalVariable;

@interface MyLocationViewController : UIViewController {
    MKMapView *mapview;
        __weak IBOutlet UILabel *latVal;

    IBOutlet UIButton *button1;
    
    
    }


-(IBAction)reveal1;



@property (weak, nonatomic) IBOutlet UILabel *LaVal;
@property (weak, nonatomic) IBOutlet UILabel *LoVal;
@property (nonatomic, retain) IBOutlet MKMapView *mapview;

- (IBAction)buttonPressed:(id)sender;
- (IBAction)passdata:(id)sender;

@end