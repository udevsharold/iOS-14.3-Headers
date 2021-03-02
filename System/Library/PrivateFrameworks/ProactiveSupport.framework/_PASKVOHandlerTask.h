/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSObject;

@interface _PASKVOHandlerTask : NSObject {

	NSString* _keyPath;
	NSObject* _object;
	/*^block*/id _afterBlock;
	/*^block*/id _beforeAndAfterBlock;

}

@property (nonatomic,copy) NSString * keyPath;                      //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic,__weak) NSObject * object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id afterBlock;                           //@synthesize afterBlock=_afterBlock - In the implementation block
@property (nonatomic,copy) id beforeAndAfterBlock;                  //@synthesize beforeAndAfterBlock=_beforeAndAfterBlock - In the implementation block
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)afterBlock;
-(void)setBeforeAndAfterBlock:(id)arg1 ;
-(NSObject *)object;
-(void)setObject:(NSObject *)arg1 ;
-(id)beforeAndAfterBlock;
-(void)setAfterBlock:(id)arg1 ;
@end
