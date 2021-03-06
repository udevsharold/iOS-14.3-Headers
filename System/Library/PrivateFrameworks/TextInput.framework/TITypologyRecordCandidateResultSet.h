/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TIKeyboardCandidateResultSet;

@interface TITypologyRecordCandidateResultSet : TITypologyRecord {

	TIKeyboardState* _keyboardState;
	TIKeyboardCandidateResultSet* _resultSet;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * resultSet;              //@synthesize resultSet=_resultSet - In the implementation block
+(BOOL)supportsSecureCoding;
-(TIKeyboardState *)keyboardState;
-(TIKeyboardCandidateResultSet *)resultSet;
-(void)replaceDocumentState:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(id)shortDescription;
-(void)setResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

