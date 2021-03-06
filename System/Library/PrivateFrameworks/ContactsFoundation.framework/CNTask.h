/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNTask : NSObject {

	BOOL _cancelled;
	NSString* _name;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(id)taskWithBlock:(/*^block*/id)arg1 ;
+(id)taskWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)taskWithResult:(id)arg1 ;
+(id)taskWithError:(id)arg1 ;
+(id)taskWithName:(id)arg1 subtasks:(id)arg2 ;
+(id)taskWithName:(id)arg1 result:(id)arg2 ;
+(id)taskWithName:(id)arg1 error:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(id)run;
-(id)init;
-(id)run:(id*)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(BOOL)isCancelled;
-(id)description;
-(BOOL)cancel;
-(id)map:(/*^block*/id)arg1 ;
-(NSString *)name;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)profileWithTimeProvider:(id)arg1 os_log:(id)arg2 ;
@end

