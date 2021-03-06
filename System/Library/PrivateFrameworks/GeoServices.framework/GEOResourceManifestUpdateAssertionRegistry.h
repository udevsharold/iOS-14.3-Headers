/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>

@class geo_isolater, NSMutableArray, NSString;

@interface GEOResourceManifestUpdateAssertionRegistry : NSObject <GEOPListStateCapturing> {

	geo_isolater* _isolation;
	NSMutableArray* _assertions;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistry;
-(id)init;
-(id)activeAssertionsDescription;
-(BOOL)hasActiveAssertions;
-(void)dealloc;
-(id)addInternalAssertionForReason:(id)arg1 ;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(id)addAssertionForProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3 ;
@end

