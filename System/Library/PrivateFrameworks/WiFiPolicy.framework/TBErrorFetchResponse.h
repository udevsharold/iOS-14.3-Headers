/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TBFetchResponse.h>

@class NSArray, NSSet, NSError, NSDictionary, NSString;

@interface TBErrorFetchResponse : NSObject <TBFetchResponse> {

	NSArray* results;
	NSSet* tiles;
	NSError* _error;

}

@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,readonly) NSSet * tiles; 
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithError:(id)arg1 ;
+(id)remoteResponseWithError:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(NSArray *)results;
-(NSSet *)tiles;
-(void)setError:(NSError *)arg1 ;
@end

