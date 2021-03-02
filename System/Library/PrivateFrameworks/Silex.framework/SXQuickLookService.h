/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXQuickLookService.h>

@protocol SXQuickLookService <NSObject>
@required
-(void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(/*^block*/id)arg3 onError:(/*^block*/id)arg4;

@end


@class QLThumbnailGenerator, NSString;

@interface SXQuickLookService : NSObject <SXQuickLookService> {

	QLThumbnailGenerator* _generator;

}

@property (nonatomic,readonly) QLThumbnailGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(QLThumbnailGenerator *)generator;
-(void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
@end
