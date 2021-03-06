/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VUIVideoAdvisoryImageInfo : NSObject {

	unsigned long long _width;
	unsigned long long _height;
	NSString* _format;

}

@property (assign,nonatomic) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSString * format;                        //@synthesize format=_format - In the implementation block
-(NSString *)format;
-(void)setWidth:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(void)setFormat:(NSString *)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)height;
@end

