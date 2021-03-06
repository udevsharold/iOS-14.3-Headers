/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPQuery.h>

@class _MSPQueryState, MSPContainer, NSString;

@interface MSPEditableQuery : MSPQuery {

	_MSPQueryState* _editedState;
	MSPContainer* _container;
	NSString* _context;

}
-(id)_visibleState;
-(id)_initWithSource:(id)arg1 ;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(void)_performEditWithStateTransformation:(/*^block*/id)arg1 containerEdit:(/*^block*/id)arg2 ;
-(void)deleteContentsObjectAtIndexes:(id)arg1 ;
-(void)deleteContentsObjectAtIndex:(unsigned long long)arg1 ;
-(void)moveContentsObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end

