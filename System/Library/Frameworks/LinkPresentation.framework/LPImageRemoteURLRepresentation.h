/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface LPImageRemoteURLRepresentation : NSObject {

	unsigned long long _scale;
	NSURL* _URL;

}

@property (nonatomic,readonly) unsigned long long scale;              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
-(unsigned long long)scale;
-(id)initWithScale:(unsigned long long)arg1 URL:(id)arg2 ;
-(NSURL *)URL;
@end

