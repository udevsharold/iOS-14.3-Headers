/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSURLComponents, _LSAppLinkOpenState;

@interface _LSAppLinkPlugIn : NSObject {

	NSURLComponents* _URLComponents;
	unsigned long long _limit;
	_LSAppLinkOpenState* _state;

}

@property (retain) NSURLComponents * URLComponents;              //@synthesize URLComponents=_URLComponents - In the implementation block
@property (assign) unsigned long long limit;                     //@synthesize limit=_limit - In the implementation block
@property (retain) _LSAppLinkOpenState * state;                  //@synthesize state=_state - In the implementation block
+(id)plugInClasses;
+(BOOL)canHandleURLComponents:(id)arg1 ;
-(void)setURLComponents:(NSURLComponents *)arg1 ;
-(id)appLinksWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(unsigned long long)limit;
-(_LSAppLinkOpenState *)state;
-(void)setLimit:(unsigned long long)arg1 ;
-(NSURLComponents *)URLComponents;
-(void)setState:(_LSAppLinkOpenState *)arg1 ;
@end

