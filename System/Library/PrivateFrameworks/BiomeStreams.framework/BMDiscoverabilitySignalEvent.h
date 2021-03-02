/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BMDiscoverabilitySignalEvent : NSObject {

	NSString* _identifier;
	NSString* _bundleID;
	NSString* _context;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                 //@synthesize context=_context - In the implementation block
-(id)init;
-(NSString *)bundleID;
-(NSString *)identifier;
-(id)description;
-(id)initWithIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
-(NSString *)context;
@end
