/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class CPImageSet;

@interface CPSPointOfInterestAnnotationView : MKAnnotationView {

	CPImageSet* _imageSet;

}

@property (nonatomic,retain) CPImageSet * imageSet;              //@synthesize imageSet=_imageSet - In the implementation block
+(CGPathRef)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2 ;
+(id)balloonWithText:(id)arg1 traitCollection:(id)arg2 ;
-(void)_configure;
-(void)prepareForDisplay;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)update;
-(void)prepareForReuse;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(CPImageSet *)imageSet;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(id)_defaultPOI;
@end
