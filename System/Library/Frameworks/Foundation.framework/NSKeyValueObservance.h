/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSKeyValueProperty;

@interface NSKeyValueObservance : NSObject {

	NSObject* _observer;
	NSKeyValueProperty* _property;
	void* _context;
	NSObject* _originalObservable;
	unsigned _options : 6;
	unsigned _cachedIsShareable : 1;
	unsigned _isInternalObservationHelper : 1;

}
-(id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 originalObservable:(id)arg5 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

