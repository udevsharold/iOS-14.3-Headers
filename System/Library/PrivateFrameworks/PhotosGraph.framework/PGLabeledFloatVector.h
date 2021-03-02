/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MAFloatVector;

@interface PGLabeledFloatVector : NSObject {

	MAFloatVector* _floatVector;
	MAFloatVector* _label;

}

@property (nonatomic,readonly) MAFloatVector * floatVector;              //@synthesize floatVector=_floatVector - In the implementation block
@property (nonatomic,readonly) MAFloatVector * label;                    //@synthesize label=_label - In the implementation block
-(MAFloatVector *)label;
-(id)initWithFloatVector:(id)arg1 label:(id)arg2 ;
-(MAFloatVector *)floatVector;
@end
