/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface FCMultiResolutionImage : NSObject <NSCopying> {

	NSURL* _imageURL1x;
	NSURL* _imageURL2x;
	NSURL* _imageURL3x;

}

@property (nonatomic,retain) NSURL * imageURL1x;              //@synthesize imageURL1x=_imageURL1x - In the implementation block
@property (nonatomic,retain) NSURL * imageURL2x;              //@synthesize imageURL2x=_imageURL2x - In the implementation block
@property (nonatomic,retain) NSURL * imageURL3x;              //@synthesize imageURL3x=_imageURL3x - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)imageURL3x;
-(id)initWithImageURL1X:(id)arg1 imageURL2X:(id)arg2 imageURL3X:(id)arg3 ;
-(void)setImageURL3x:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)imageURL1x;
-(NSURL *)imageURL2x;
-(void)setImageURL2x:(NSURL *)arg1 ;
-(void)setImageURL1x:(NSURL *)arg1 ;
@end

