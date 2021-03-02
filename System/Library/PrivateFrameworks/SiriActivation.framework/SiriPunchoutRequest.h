/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface SiriPunchoutRequest : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSURL* _url;
	long long _punchoutStyle;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long punchoutStyle;                //@synthesize punchoutStyle=_punchoutStyle - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(long long)punchoutStyle;
-(void)setPunchoutStyle:(long long)arg1 ;
@end
