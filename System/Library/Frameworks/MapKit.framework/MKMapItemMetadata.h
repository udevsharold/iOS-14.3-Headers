/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject {

	GEOBusiness* _business;
	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,readonly) GEOBusiness * business;                      //@synthesize business=_business - In the implementation block
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(GEOBusiness *)business;
-(id)description;
-(void)addImage:(id)arg1 forURL:(id)arg2 ;
-(id)initWithBusiness:(id)arg1 ;
-(id)imageForURL:(id)arg1 ;
@end

