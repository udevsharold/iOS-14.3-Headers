/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGLazyInit : NSObject {

	/*^block*/id _initializer;
	/*^block*/id _destructor;
	id _cachedObject;

}
-(void)dealloc;
-(id)getObject;
-(id)initWithInitializer:(/*^block*/id)arg1 destructor:(/*^block*/id)arg2 ;
-(id)peekAtCachedObject;
-(void)destroyCachedObject;
@end

