////  LevelCompleteView.h//  LateWorm////  Created by Fred Sharples on 12/14/09.//  Copyright 2009 __MyCompanyName__. All rights reserved.//#import <UIKit/UIKit.h>@class LevelFlowerView;@interface LevelCompleteView : UIView {	IBOutlet UIImageView *_bkg;	IBOutlet LevelFlowerView *_levelFlower;	IBOutlet UIButton *_tryAgainButton;	IBOutlet UIButton *_nextRoundButton;	IBOutlet UIButton *_gardenButton;	IBOutlet UIButton *_menuButton;	IBOutlet UILabel *_wonText;	IBOutlet UILabel *_movesText;	IBOutlet UILabel *_movesSolvedText;}- (void) setLevel:(unsigned)levelNum withMoves:(unsigned)moves withLeastMoves:(unsigned)leastMoves forTotalLevels:(unsigned)totalLevels levelAlreadyCompleted:(BOOL)levelAlreadyCompleted;@end