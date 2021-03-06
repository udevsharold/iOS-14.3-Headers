/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSURL;

@interface FCCoverArtImage : NSObject {

	NSURL* _URL;
	CGSize _dimensions;

}

@property (nonatomic,readonly) CGSize dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
-(CGSize)dimensions;
-(id)initWithDimensions:(CGSize)arg1 URL:(id)arg2 ;
-(NSURL *)URL;
@end

