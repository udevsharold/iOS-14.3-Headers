/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject {

	MPUBorderView* _borderView;
	NSCache* _images;
	double _displayScale;

}

@property (assign,nonatomic) double displayScale;              //@synthesize displayScale=_displayScale - In the implementation block
-(id)init;
-(void)setDisplayScale:(double)arg1 ;
-(void)dealloc;
-(double)displayScale;
-(void)_invalidate;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
-(id)_borderView;
-(id)imageForBorderConfiguration:(id)arg1 ;
@end

