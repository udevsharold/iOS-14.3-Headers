/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCArticleDownloadServiceType.h>

@protocol FCContentContext, FCFlintHelper;
@interface FCArticleDownloadService : NSObject <FCArticleDownloadServiceType> {

	id<FCContentContext> _context;
	id<FCFlintHelper> _flintHelper;

}

@property (nonatomic,readonly) id<FCContentContext> context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<FCFlintHelper> flintHelper;              //@synthesize flintHelper=_flintHelper - In the implementation block
-(id)init;
-(id<FCFlintHelper>)flintHelper;
-(id)downloadArticleWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 ;
-(id)fetchCachedArticleWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FCContentContext>)context;
@end

