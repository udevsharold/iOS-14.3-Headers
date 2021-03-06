/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPVideo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LPVideoAttachmentSubstitute : LPVideo <NSSecureCoding> {

	long long _index;

}

@property (assign,nonatomic) long long index;              //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIndex:(long long)arg1 ;
-(long long)index;
-(id)initWithVideo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldEncodeData;
-(void)encodeWithCoder:(id)arg1 ;
@end

