/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBApplication, NSString;

@interface _SBStatusBarTapApplicationDestination : NSObject <NSCopying> {

	SBApplication* _application;
	NSString* _sceneIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * sceneIdentifier;               //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
-(NSString *)sceneIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)application;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithApplication:(id)arg1 sceneIdentifier:(id)arg2 ;
@end

