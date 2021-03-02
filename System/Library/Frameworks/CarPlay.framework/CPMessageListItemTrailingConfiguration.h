/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPImageSet, UIImage;

@interface CPMessageListItemTrailingConfiguration : NSObject <NSSecureCoding> {

	long long _trailingItem;
	CPImageSet* _trailingImageSet;

}

@property (nonatomic,retain) CPImageSet * trailingImageSet;              //@synthesize trailingImageSet=_trailingImageSet - In the implementation block
@property (nonatomic,readonly) long long trailingItem;                   //@synthesize trailingItem=_trailingItem - In the implementation block
@property (nonatomic,readonly) UIImage * trailingImage; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)trailingImage;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)trailingItem;
-(CPImageSet *)trailingImageSet;
-(id)initWithTrailingItem:(long long)arg1 trailingImage:(id)arg2 ;
-(void)setTrailingImageSet:(CPImageSet *)arg1 ;
@end
