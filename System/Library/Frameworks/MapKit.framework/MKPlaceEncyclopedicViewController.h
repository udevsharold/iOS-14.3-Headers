/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;
@class MKPlaceTextBlockCell, NSMutableArray, NSString;

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _textBlockExpanded;
	MKPlaceTextBlockCell* _textCell;
	NSMutableArray* _factoidCells;
	id<GEOEncyclopedicInfo> _encyclopedicInfo;
	id<MKPlaceCardEncyclopedicControllerDelegate> _encyclopedicControllerDelegate;

}

@property (nonatomic,retain) id<GEOEncyclopedicInfo> encyclopedicInfo;                                                         //@synthesize encyclopedicInfo=_encyclopedicInfo - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate;              //@synthesize encyclopedicControllerDelegate=_encyclopedicControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)draggableContent;
-(void)setEncyclopedicInfo:(id<GEOEncyclopedicInfo>)arg1 ;
-(void)setEncyclopedicControllerDelegate:(id<MKPlaceCardEncyclopedicControllerDelegate>)arg1 ;
-(id)_factoids;
-(void)_updateViews;
-(id)_textBlockTitle;
-(void)_viewEncyclopedicContent;
-(id)_textBlockText;
-(id<MKPlaceCardEncyclopedicControllerDelegate>)encyclopedicControllerDelegate;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
@end

