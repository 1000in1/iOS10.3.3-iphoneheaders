/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, FBAQuestion, UIImageView;

@interface FBAQuestionTableCell : UITableViewCell {

	char _showError;
	UILabel* _questionLabel;
	UILabel* _answerLabel;
	FBAQuestion* _question;
	UIImageView* _fauxAccessoryView;
	UIImageView* _errorArrow;

}

@property (assign,nonatomic,__weak) UIImageView * fauxAccessoryView;              //@synthesize fauxAccessoryView=_fauxAccessoryView - In the implementation block
@property (nonatomic,retain) UIImageView * errorArrow;                            //@synthesize errorArrow=_errorArrow - In the implementation block
@property (assign,nonatomic,__weak) UILabel * questionLabel;                      //@synthesize questionLabel=_questionLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * answerLabel;                        //@synthesize answerLabel=_answerLabel - In the implementation block
@property (nonatomic,retain) FBAQuestion * question;                              //@synthesize question=_question - In the implementation block
@property (assign,nonatomic) char showError;                                      //@synthesize showError=_showError - In the implementation block
-(UILabel *)questionLabel;
-(UILabel *)answerLabel;
-(void)setQuestion:(FBAQuestion *)arg1 ;
-(UIImageView *)fauxAccessoryView;
-(void)setFauxAccessoryView:(UIImageView *)arg1 ;
-(FBAQuestion *)question;
-(void)setShowError:(char)arg1 ;
-(void)updateErrorArrow;
-(void)showErrorArrow;
-(void)hideErrorArrow;
-(UIImageView *)errorArrow;
-(void)setQuestionLabel:(UILabel *)arg1 ;
-(void)setAnswerLabel:(UILabel *)arg1 ;
-(void)setErrorArrow:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(void)commonInit;
-(char)showError;
@end
