/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGPictureInPictureApplication : NSObject {

	int _processIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) int processIdentifier;                    //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(id)initWithProcessIdentifier:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)processIdentifier;
-(NSString *)bundleIdentifier;
-(BOOL)isEqualToPGPictureInPictureApplication:(id)arg1 ;
@end

