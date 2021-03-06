/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXHeuristicObjectHandle, NSString;

@interface ATXHeuristicCreateCalendarEventActionMaker : ATXHeuristicActionMaker {

	ATXHeuristicObjectHandle* _event;
	NSString* _suggestionsInfoUniqueKey;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_makeAction;
-(id)actionTypeName;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 event:(id)arg3 suggestionsInfoUniqueKey:(id)arg4 ;
@end

