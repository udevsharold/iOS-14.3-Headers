/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIAppIconImage.h>

@class UIWebClip;

@interface SearchUIWebClipIconImage : SearchUIAppIconImage {

	UIWebClip* _webClip;

}

@property (nonatomic,retain) UIWebClip * webClip;              //@synthesize webClip=_webClip - In the implementation block
+(id)convertImage:(id)arg1 ofSize:(CGSize)arg2 withShape:(unsigned long long)arg3 ;
-(id)initWithWebClip:(id)arg1 variant:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)uniqueIdentifier;
-(void)setWebClip:(UIWebClip *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)generateImageWithFormat:(int)arg1 ;
-(UIWebClip *)webClip;
@end
