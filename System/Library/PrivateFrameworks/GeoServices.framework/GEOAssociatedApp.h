/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDAssociatedApp, NSString, NSArray;

@interface GEOAssociatedApp : NSObject {

	GEOPDAssociatedApp* _geoAssociatedApp;

}

@property (nonatomic,retain) GEOPDAssociatedApp * geoAssociatedApp;              //@synthesize geoAssociatedApp=_geoAssociatedApp - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredAppAdamId; 
@property (nonatomic,readonly) NSString * preferredAppAdamId; 
@property (nonatomic,readonly) NSArray * alternateAppAdamIds; 
-(NSString *)preferredAppAdamId;
-(NSArray *)alternateAppAdamIds;
-(BOOL)hasPreferredAppAdamId;
-(id)initWithGEOPDAssociatedApp:(id)arg1 ;
-(GEOPDAssociatedApp *)geoAssociatedApp;
-(void)setGeoAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
@end

