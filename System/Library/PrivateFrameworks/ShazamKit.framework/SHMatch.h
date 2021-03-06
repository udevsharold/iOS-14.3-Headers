/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SHSignature;

@interface SHMatch : NSObject <NSSecureCoding> {

	NSArray* _mediaItems;
	SHSignature* _signature;

}

@property (nonatomic,readonly) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,readonly) SHSignature * signature;              //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
-(SHSignature *)signature;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)mediaItems;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMediaItems:(id)arg1 forSignature:(id)arg2 ;
-(BOOL)containsMediaItemWithFuzzyTolerance:(id)arg1 ;
@end

