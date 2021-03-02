/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, AAAbsintheContext;

@interface AAAbsintheSignerContextCache : NSObject {

	NSDate* _creationDate;
	AAAbsintheContext* _context;

}

@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) AAAbsintheContext * context;              //@synthesize context=_context - In the implementation block
+(id)cacheWithContext:(id)arg1 ;
-(NSDate *)creationDate;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(AAAbsintheContext *)context;
@end
