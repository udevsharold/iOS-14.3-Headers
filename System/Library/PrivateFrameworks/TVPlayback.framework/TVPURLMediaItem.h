/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class NSURL, NSSet;

@interface TVPURLMediaItem : TVPBaseMediaItem {

	NSURL* _url;
	NSSet* _traits;

}

@property (nonatomic,copy) NSURL * url;                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSSet * traits;              //@synthesize traits=_traits - In the implementation block
-(void)setTraits:(NSSet *)arg1 ;
-(id)init;
-(NSSet *)traits;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
@end

