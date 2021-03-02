/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UILabel.h>

@class MKMapView, NSTimer, NSString, UIColor, NSDateFormatter;

@interface MKDebugLocationConsole : UILabel {

	MKMapView* _parentMapView;
	NSTimer* _updateTimer;
	unsigned long long _pageIndex;
	NSString* _customText;
	UIColor* _customTextColor;
	BOOL _customTextEnabled;
	NSDateFormatter* _timeStampFormatter;

}

@property (assign,nonatomic) unsigned long long pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) BOOL customTextEnabled;                    //@synthesize customTextEnabled=_customTextEnabled - In the implementation block
-(void)setText:(id)arg1 ;
-(id)initWithMapView:(id)arg1 ;
-(void)updateFrameWithEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)update;
-(void)_consoleTapped:(id)arg1 ;
-(CGRect)_debugViewFrameWithMapView:(id)arg1 ;
-(void)_updateGPSInfo;
-(void)_updateVehicleInfo;
-(void)_updateCustomText;
-(void)_showNextPage;
-(id)timeStampFormatter;
-(void)updateCustomText:(id)arg1 textColor:(id)arg2 ;
-(BOOL)customTextEnabled;
-(void)setCustomTextEnabled:(BOOL)arg1 ;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndex;
@end
