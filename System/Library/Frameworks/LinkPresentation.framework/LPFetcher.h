/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPEvent;

@interface LPFetcher : NSObject {

	unsigned _loggingID;
	LPEvent* _event;
	id _userData;

}

@property (nonatomic,readonly) unsigned _loggingID;              //@synthesize loggingID=_loggingID - In the implementation block
@property (nonatomic,retain) LPEvent * _event;                   //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) id userData;                        //@synthesize userData=_userData - In the implementation block
-(LPEvent *)_event;
-(void)setUserData:(id)arg1 ;
-(id)userData;
-(id)init;
-(void)cancel;
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)_loggingID;
-(void)set_event:(LPEvent *)arg1 ;
@end

