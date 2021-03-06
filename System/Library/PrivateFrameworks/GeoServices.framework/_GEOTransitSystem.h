/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitSystem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GEOPBTransitSystem, GEOStyleAttributes;

@interface _GEOTransitSystem : NSObject <GEOTransitSystem, NSSecureCoding> {

	GEOPBTransitSystem* _system;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(GEOStyleAttributes *)styleAttributes;
-(unsigned long long)muid;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSystem:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
@end

