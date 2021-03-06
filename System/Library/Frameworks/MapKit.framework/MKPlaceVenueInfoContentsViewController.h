/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOMapItemVenueContents;
@class NSArray, NSString;

@interface MKPlaceVenueInfoContentsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	id<GEOMapItemVenueContents> _venueContents;
	NSArray* _labels;

}

@property (nonatomic,retain) id<GEOMapItemVenueContents> venueContents;              //@synthesize venueContents=_venueContents - In the implementation block
@property (nonatomic,retain) NSArray * labels;                                       //@synthesize labels=_labels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)venueInfoContentsViewControllerWithMapItem:(id)arg1 ;
+(BOOL)isVisibleWithMapItem:(id)arg1 ;
-(NSArray *)labels;
-(id)_labelFont;
-(void)_updateRows;
-(void)infoCardThemeChanged;
-(void)_contentSizeDidChange;
-(id)initWithVenueContents:(id)arg1 ;
-(id<GEOMapItemVenueContents>)venueContents;
-(void)_addPaddingRowToRows:(id)arg1 ;
-(id)labelWithTitle:(id)arg1 ;
-(id)rowWithLeftLabel:(id)arg1 rightLabel:(id)arg2 ;
-(void)updateLabelsProperties;
-(void)setVenueContents:(id<GEOMapItemVenueContents>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setLabels:(NSArray *)arg1 ;
@end

