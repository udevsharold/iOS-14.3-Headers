/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface OBBundle : NSObject {

	NSString* _identifier;
	NSBundle* _bundle;
	NSString* _bundleVersion;

}

@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;              //@synthesize bundleVersion=_bundleVersion - In the implementation block
+(id)bundleWithIdentifier:(id)arg1 ;
+(id)bundleAtPath:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)bundleVersion;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)identifier;
-(id)privacyFlow;
@end

