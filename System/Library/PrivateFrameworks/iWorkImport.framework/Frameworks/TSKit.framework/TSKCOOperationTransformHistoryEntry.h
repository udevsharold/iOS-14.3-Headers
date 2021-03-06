/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSKit/TSKit-Structs.h>
@class NSString;

@interface TSKCOOperationTransformHistoryEntry : NSObject {

	NSString* _originalOperationString;
	NSString* _transformingOperationString;
	NSString* _resultOperationString;

}
-(id)description;
-(id)initWithOriginalOperation:(const shared_ptr<TSKCO::AbstractOperation>*)arg1 transformingOperation:(const shared_ptr<TSKCO::AbstractOperation>*)arg2 ;
-(BOOL)applyResult:(const shared_ptr<TSKCO::AbstractOperation>*)arg1 ;
@end

