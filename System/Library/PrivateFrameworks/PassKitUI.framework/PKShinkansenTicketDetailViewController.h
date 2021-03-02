/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTransitTicketDetailViewController.h>
#import <libobjc.A.dylib/PKTransitTicketDetailDataSource.h>

@class NSMutableArray, PKFelicaPassProperties, NSString;

@interface PKShinkansenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource> {

	NSMutableArray* _train1Titles;
	NSMutableArray* _train2Titles;
	NSMutableArray* _train1Values;
	NSMutableArray* _train2Values;
	PKFelicaPassProperties* _properties;

}

@property (nonatomic,readonly) PKFelicaPassProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)titleForLeg:(unsigned long long)arg1 ;
-(long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1 ;
-(id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2 ;
-(id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2 ;
-(id)initWithFelicaProperty:(id)arg1 ;
-(PKFelicaPassProperties *)properties;
-(void)_prepareLabelsAndValues;
-(id)_transitTicketTitleForDetail:(unsigned long long)arg1 ;
-(id)_transitTicketValueForDetail:(unsigned long long)arg1 forSecondaryTrain:(BOOL)arg2 ;
-(unsigned long long)numberOfLegs;
@end
