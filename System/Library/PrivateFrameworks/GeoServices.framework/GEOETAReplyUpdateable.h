/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEOETATrafficUpdateResponse, NSString;

@interface GEOETAReplyUpdateable : GEOXPCReply <GEOXPCReply> {

	GEOETATrafficUpdateResponse* _response;

}

@property (nonatomic,retain) GEOETATrafficUpdateResponse * response;              //@synthesize response=_response - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(GEOETATrafficUpdateResponse *)response;
-(void)setResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)isValid;
@end

