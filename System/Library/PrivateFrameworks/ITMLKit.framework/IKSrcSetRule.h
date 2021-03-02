/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, IKStyleMediaQuery;

@interface IKSrcSetRule : NSObject {

	NSURL* _imageURL;
	NSString* _descriptor;
	IKStyleMediaQuery* _mediaQuery;

}

@property (nonatomic,retain) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * descriptor;                       //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) IKStyleMediaQuery * mediaQuery;              //@synthesize mediaQuery=_mediaQuery - In the implementation block
-(void)setDescriptor:(NSString *)arg1 ;
-(IKStyleMediaQuery *)mediaQuery;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)descriptor;
-(id)initWithURL:(id)arg1 descriptor:(id)arg2 ;
-(void)_parseDescriptor:(id)arg1 ;
-(void)_parseMediaQueryDescriptor:(id)arg1 ;
-(void)_parseResolutionDescriptor:(id)arg1 ;
-(void)setMediaQuery:(IKStyleMediaQuery *)arg1 ;
@end
