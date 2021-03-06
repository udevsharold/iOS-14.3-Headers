/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASDomainSelection.h>

@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {

	NSSet* _domains;

}
-(BOOL)isEmpty;
-(BOOL)isEqualToDomainSelection:(id)arg1 ;
-(id)_initWithNonOverlappingDomainSet:(id)arg1 ;
-(id)allDomains;
-(BOOL)containsDomain:(id)arg1 ;
@end

